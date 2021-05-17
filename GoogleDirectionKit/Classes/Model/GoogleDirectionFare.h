//
//  GoogleDirectionFare.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionFare : NSObject

@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *text;

@end

NS_ASSUME_NONNULL_END
