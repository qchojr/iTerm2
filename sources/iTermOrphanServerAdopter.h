//
//  iTermOrphanServerAdopter.h
//  iTerm2
//
//  Created by George Nachman on 6/7/15.
//
//

#import <Foundation/Foundation.h>

@interface iTermOrphanServerAdopter : NSObject

@property(nonatomic, readonly) BOOL haveOrphanServers;

+ (instancetype)sharedInstance;
- (void)openWindowWithOrphansWithCompletion:(void (^)(void))completion;
- (void)removePath:(NSString *)path;

@end
