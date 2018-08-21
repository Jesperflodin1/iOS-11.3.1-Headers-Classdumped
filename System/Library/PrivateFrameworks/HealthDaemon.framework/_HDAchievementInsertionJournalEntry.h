/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class _HKAchievement;

@interface _HDAchievementInsertionJournalEntry : HDJournalEntry {

	_HKAchievement* _achievement;

}

@property (nonatomic,readonly) _HKAchievement * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAchievement:(id)arg1 ;
-(_HKAchievement *)achievement;
@end
