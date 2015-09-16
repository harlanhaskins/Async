//
//  AsyncHelper.h
//  Flex 3 App
//
//  Created by John Coates on 9/15/15.
//  Copyright © 2015 John Coates. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QDispatchBlock : NSObject

- (instancetype)initWithBlock:(dispatch_block_t)block;
- (void)dispatchAsyncToQueue:(dispatch_queue_t)queue;
- (void)notifyNextBlockOnCompletion:(QDispatchBlock *)nextBlock inQueue:(dispatch_queue_t)queue;
- (void)dispatchAfter:(dispatch_time_t)time inQueue:(dispatch_queue_t)queue;
- (void)wait:(dispatch_time_t)time;
- (void)cancel;

@end



