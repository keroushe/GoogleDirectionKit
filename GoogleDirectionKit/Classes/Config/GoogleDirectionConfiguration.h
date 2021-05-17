//
//  GoogleDirectionConfiguration.h
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GoogleDirectionConfiguration : NSObject

@property (class, strong, readonly) GoogleDirectionConfiguration *sharedInstance;

/* Is the API request logging enable or disable */
@property (nonatomic, assign) BOOL isLogEnabled;

@end

NS_ASSUME_NONNULL_END
