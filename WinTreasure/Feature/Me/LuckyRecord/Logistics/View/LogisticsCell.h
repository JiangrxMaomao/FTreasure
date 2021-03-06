//
//  LogisticsCell.h
//  WinTreasure
//
//  Created by Apple on 16/6/28.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LogisticsModel.h"

@interface LogisticsCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *statusLabel;

@property (weak, nonatomic) IBOutlet UILabel *timeLabel;

@property (nonatomic, strong) LogisticsModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableview;

@end

@interface LogisticsFollowCell : UITableViewCell

+ (instancetype)cellWithTableView:(UITableView *)tableview;

@end
