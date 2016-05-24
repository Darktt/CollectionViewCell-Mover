//
//  DTCollectionViewCellMover.h
//
//  Created by Darktt on 2016/5/23.
//  Copyright © 2016年 Darktt. All rights reserved.
//

#import "UICollectionView+CellMover.h"

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@protocol DTCollectionViewCellMoverDelegate;
@interface DTCollectionViewCellMover : NSObject

+ (instancetype)cellMoverWithDelegate:(id<DTCollectionViewCellMoverDelegate>)delegate;

@end

@protocol DTCollectionViewCellMoverDelegate <NSObject>

- (void)cellMover:(DTCollectionViewCellMover *)cellMover willExchangeItemFromIndex:(NSInteger)index toIndex:(NSInteger)toIndex;

@end
NS_ASSUME_NONNULL_END