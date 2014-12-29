//
//  YJViewController.h
//  SMS_SDKDemo
//
//  Created by 刘靖煌 on 14-6-27.
//  Copyright (c) 2014年 掌淘科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SMS_SDK/SMS_SDKResultHanderDef.h"

@interface YJViewController : UIViewController

@property(nonatomic,strong)  UIButton* friends;
@property(nonatomic,strong)  UIButton* registerUserBtn;
@property(nonatomic,strong) ShowNewFriendsCountBlock friendsBlock;

-(void)registerUser;
-(void)getAddressBookFriends;

@end