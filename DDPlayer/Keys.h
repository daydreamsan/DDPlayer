//
//  keys.h
//  WCJunior
//
//  Created by 齐江涛 on 2017/4/5.
//  Copyright © 2017年 daydream. All rights reserved.
//

#ifndef keys_h
#define keys_h
#import <Foundation/Foundation.h>

FOUNDATION_EXTERN NSString *WCMessageIDKey;
FOUNDATION_EXTERN NSString *WCMessageContentKey;
FOUNDATION_EXTERN NSString *WCMessageTitleKey;
FOUNDATION_EXTERN NSString *WCMessageDateKey;

#pragma mark - 通知
FOUNDATION_EXTERN NSString *WCUserActivityStateHasChangeNotification;
FOUNDATION_EXTERN NSString *WCMediaPackageHasFinishedUnzipNotificationResultKey;
FOUNDATION_EXTERN NSString *WCMediaPackageHasFinishedUnzipNotification;

///< 用于单词列表类型表示
typedef NS_ENUM(NSInteger, WCWordListShowType) {
    WCWordListShowTypeUnitWord,
    WCWordListShowTypeLexicalGrade,
    WCWordListShowTypeDetail
};

#endif /* keys_h */
