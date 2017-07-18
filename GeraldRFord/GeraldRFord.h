//
//  GeraldRFord.h
//  GeraldRFordDemo
//
//  Created by 李二狗 on 2017/7/18.
//  Copyright © 2017年 YRHY Science and Technology (Beijing) Co., Ltd. All rights reserved.
//

#ifndef GeraldRFord_h
#define GeraldRFord_h

//网络状态判断
#define __IsWifiConnected     \
([[Reachability reachabilityForInternetConnection] currentReachabilityStatus] == ReachableViaWiFi)
#define __IsWWANConnected     \
([[Reachability reachabilityForInternetConnection] currentReachabilityStatus] == ReachableViaWWAN)
#define __IsNetWorkConnected  \
(__IsWifiConnected || __IsWWANConnected)

//手势返回
#import "UINavigationController+FDFullscreenPopGesture.h"
//键盘自适应高度
#import "UIScrollView+AdaptiveKeyboardHeight.h"





#endif /* GeraldRFord_h */
