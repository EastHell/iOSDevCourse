//
//  UserTableViewCell.h
//  CSAPIBasicTask
//
//  Created by Aleksandr on 20/05/2020.
//  Copyright © 2020 Aleksandr Shushkov. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UserTableViewCell : UITableViewCell

@property (strong, nonatomic, nullable) void(^onReuse)(void);
@property (strong, nonatomic) UILabel *usernameLabel;
- (void)addImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
