//
//  GoogleDirectionManage.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>
#import "GoogleDirectionRequestInfo.h"
#import "GoogleDirectionResponseParseInfo.h"

NS_ASSUME_NONNULL_BEGIN

/// 入口
@interface GoogleDirectionManage : NSObject

// 开始获取路径信息
+ (void)startAcceptDirectionInfoWith:(GoogleDirectionRequestInfo *)requestInfo completion:(void(^)(BOOL success, GoogleDirectionResponseParseInfo *resultInfo))completion;

@end

NS_ASSUME_NONNULL_END
