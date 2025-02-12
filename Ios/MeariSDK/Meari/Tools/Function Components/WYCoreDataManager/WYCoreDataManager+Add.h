//
//  WYCoreDataManager+Add.h
//  Meari
//
//  Created by 李兵 on 2017/5/19.
//  Copyright © 2017年 PPStrong. All rights reserved.
//

#import "WYCoreDataManager.h"

@interface WYCoreDataManager (Add)
//报警消息
- (NSArray *)getAllAlarmMessagesOfDevice:(NSNumber *)deviceID;
- (NSArray *)getSortedAlarmMessagesOfDevice:(NSNumber *)deviceID count:(NSInteger)count;
- (BOOL)hasUnreadMessageOfDevice:(NSNumber *)deviceID;
- (void)deletegetAllAlarmMessagesOfDevice:(NSNumber *)deviceID;
@end
