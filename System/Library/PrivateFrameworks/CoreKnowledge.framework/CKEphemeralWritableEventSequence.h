/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKEphemeralWritableEventSequence
@required
-(void)loadFromKnowledgeStreamNamed:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeAllEventsSavedInKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)appendEvent:(id)arg1;
-(void)writeEventsToKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

