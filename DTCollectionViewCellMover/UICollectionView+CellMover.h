//
//  UICollectionView+CellMover.h
//
//  Created by Darktt on 2016/5/23.
//  Copyright © 2016年 Darktt. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@class DTCollectionViewCellMover;
@interface UICollectionView (CellMover)

@property (retain, nonatomic, nullable) DTCollectionViewCellMover *cellMover;

@end
NS_ASSUME_NONNULL_END