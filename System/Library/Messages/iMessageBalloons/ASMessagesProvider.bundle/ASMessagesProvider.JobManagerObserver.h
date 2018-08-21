/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASDJobManagerObserver.h>

@class ASDJobManager;

@interface ASMessagesProvider.JobManagerObserver : NSObject <ASDJobManagerObserver> {

	 observers;
	 jobManager;

}

@property (readonly,nonatomic) ASDJobManager * jobManager; 
+(id)shared;
-(ASDJobManager *)jobManager;
-(id)init;
-(void)dealloc;
-(void)jobManager:(id)arg1 changedJobs:(id)arg2 ;
-(void)jobManager:(id)arg1 completedJobs:(id)arg2 ;
-(void)jobManager:(id)arg1 updatedProgressOfJobs:(id)arg2 ;
-(void)jobManager:(id)arg1 updatedStateOfJobs:(id)arg2 ;
@end
