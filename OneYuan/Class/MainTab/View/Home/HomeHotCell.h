//
//  HomeHotCell.h
//  OneYuan
//
//  Created by Peter Jin (https://github.com/JxbSir) on  15/2/19.
//  Copyright (c) 2015年 PeterJin.   Email:i@jxb.name      All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HomeHotCellDelegate
- (void)adClick:(NSString*)key;
@end

@interface HomeHotCell : UITableViewCell
@property(nonatomic,weak)id<HomeHotCellDelegate> delegate;
- (void)setHots:(NSArray*)arrOfHots;
@end
