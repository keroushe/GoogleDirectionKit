//
//  GoogleDirectionManage.m
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import "GoogleDirectionManage.h"
#import "GoogleDirectionConstant.h"
// 数据解析
#import <MJExtension/MJExtension.h>

@implementation GoogleDirectionManage

// 开始获取路径信息
+ (void)startAcceptDirectionInfoWith:(GoogleDirectionRequestInfo *)requestInfo completion:(void(^)(BOOL success, GoogleDirectionResponseParseInfo *resultInfo))completion
{
    //https://maps.googleapis.com/maps/api/directions/json?origin=sydney,au&destination=perth,au&waypoints=via:-37.81223,144.96254|via:-34.92788,138.60008&key=YOUR_API_KEY
    NSString *parmsStr = [requestInfo getParmsString];
    parmsStr = [parmsStr stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]];
    
    NSString *urlStr = [NSString stringWithFormat:@"%@?%@", GoogleDirectionDirectionUrl, parmsStr];
    NSURL *requestUrl = [NSURL URLWithString:urlStr];
    
    NSURLRequest *request = [NSURLRequest requestWithURL:requestUrl];
    NSURLSession *session = [NSURLSession sharedSession];
    
    NSURLSessionDataTask *dataTask = [session dataTaskWithRequest:request completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error) {
        //
        if (error != nil)
        {
            if (completion) completion(NO, nil);
        }
        else
        {
            NSDictionary *dict = [NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:nil];
            GoogleDirectionResponseParseInfo *directionInfo = [GoogleDirectionResponseParseInfo mj_objectWithKeyValues:dict];
//            GoogleDirectionResponseParseInfo *directionInfo = [GoogleDirectionResponseParseInfo yy_modelWithDictionary:dict];
            if (completion) completion(YES, directionInfo);
        }
    }];
    [dataTask resume];
}

@end
