/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivitySharingPlugin/ActivitySharingPlugin-Structs.h>
@class NSMutableDictionary;

@interface ASMessageQueue : NSObject {

	NSMutableDictionary* _identifierToMessageDictionary;
	CFStringRef _domainName;
	CFStringRef _queueName;

}
-(id)initWithQueueName:(id)arg1 ;
-(void)setMessage:(id)arg1 identifier:(id)arg2 ;
-(void)removeMessageWithIdentifier:(id)arg1 ;
-(void)enumerateQueuedMessagesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_synchronizePreferences;
-(id)messageWithIdentifier:(id)arg1 ;
@end
