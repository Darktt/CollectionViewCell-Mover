//
//  ViewController.m
//  CollectionViewMoveCellDemo
//
//  Created by EdenLi on 2016/5/23.
//  Copyright © 2016年 Realtime. All rights reserved.
//

#import <DTCategories/DTCategories.h>
#import "ViewController.h"

#import "DTCollectionViewCellMover.h"
#import "DTCollectionViewCell.h"

@interface ViewController () <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, DTCollectionViewCellMoverDelegate>
{
    NSMutableArray<NSDictionary *> *_cellColors;
}

@property (assign, nonatomic) IBOutlet UICollectionView *collectionView;

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    NSString *path = [[NSBundle mainBundle] pathForResource:@"CellData" ofType:@"plist"];
    NSArray *array = [[NSArray alloc] initWithContentsOfFile:path];
    
    NSComparisonResult (^comparator) (id, id) = ^NSComparisonResult(NSDictionary *obj1, NSDictionary *obj2) {
        NSNumber *number1 = obj1[@"Sort"];
        NSNumber *number2 = obj2[@"Sort"];
        
        return [number1 compare:number2];
    };
    
    NSArray *sortedArray = [array sortedArrayUsingComparator:comparator];
    
    _cellColors = [[NSMutableArray alloc] initWithArray:sortedArray];
    [array release];
    
    DTCollectionViewCellMover *cellMover = [DTCollectionViewCellMover cellMoverWithDelegate:self];
    UIEdgeInsets contentInsets = UIEdgeInsetsMake(20.0f, 0.0f, 100.0f, 0.0f);
    
    [self.collectionView setCellMover:cellMover];
    [self.collectionView setContentInset:contentInsets];
    [self.collectionView setDataSource:self];
    [self.collectionView setDelegate:self];
}

- (UIStatusBarStyle)preferredStatusBarStyle
{
    return UIStatusBarStyleLightContent;
}

- (void)dealloc
{
    [_cellColors release];
    
    [super dealloc];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - UICollectionView DataSource

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    return _cellColors.count;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    NSString *cellIdentifier = [DTCollectionViewCell cellIdentifier];
    NSInteger index = indexPath.item;
    
    UIColor *color = [UIColor colorWithHexString:_cellColors[index][@"Color"]];
    
    DTCollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:cellIdentifier forIndexPath:indexPath];
    [cell.contentView setBackgroundColor:color];
    
    return cell;
}

#pragma mark - UICollectionViewDelegateFlowLayout

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    CGFloat width = CGRectGetWidth(collectionView.bounds);
    CGFloat cellSapceWidth = 10.0f;
    
    CGFloat numberOfCellInRow = 4.0f;
    
    CGFloat cellWidth = (width - cellSapceWidth) / numberOfCellInRow - cellSapceWidth;
    
    return CGSizeMake(cellWidth, cellWidth);
}

- (UIEdgeInsets)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout insetForSectionAtIndex:(NSInteger)section
{
    return UIEdgeInsetsMake(10.0f, 10.0f, 10.0f, 10.0f);
}

#pragma mark - DTCollectionViewCellMoverDelegate

- (void)cellMover:(DTCollectionViewCellMover *)cellMover willExchangeItemFromIndex:(NSInteger)index toIndex:(NSInteger)toIndex
{
    [_cellColors moveObjectAtIndex:index toIndex:toIndex];
}

@end

@interface NSDictionary (dic)

@end

@implementation NSDictionary (dic)

- (void)dealloc
{
    [super dealloc];
}

@end
