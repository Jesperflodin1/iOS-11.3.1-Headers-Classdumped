/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@class NSArray;

@interface _CNAggregateTask : CNTask {

	NSArray* _tasks;

}

@property (nonatomic,readonly) NSArray * tasks;              //@synthesize tasks=_tasks - In the implementation block
-(id)initWithName:(id)arg1 tasks:(id)arg2 ;
-(id)runSubtask:(id)arg1 error:(id*)arg2 ;
-(void)cancelSubtasks;
-(BOOL)cancel;
-(id)description;
-(NSArray *)tasks;
-(id)run:(id*)arg1 ;
@end

