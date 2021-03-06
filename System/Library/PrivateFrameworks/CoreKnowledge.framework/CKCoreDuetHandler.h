/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKCoreDuetHandler : NSObject
+(id)duetKnowledgeStore;
+(void)duetEventsWithIdentifier:(id)arg1 inStreamNamed:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)saveEvents:(id)arg1 toStreamNamed:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)removeAllFromStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

