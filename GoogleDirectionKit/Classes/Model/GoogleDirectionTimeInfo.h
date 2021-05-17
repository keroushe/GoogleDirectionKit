//
//  GoogleDirectionTimeInfo.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionTimeInfo : NSObject

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *time_zone;
@property (nonatomic, copy) NSString *value;

@end

NS_ASSUME_NONNULL_END
