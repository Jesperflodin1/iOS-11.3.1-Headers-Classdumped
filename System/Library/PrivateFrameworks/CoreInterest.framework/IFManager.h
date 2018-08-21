/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IFManager : NSObject
+(BOOL)executeQuery:(id)arg1 ;
+(void)propagateUp:(id)arg1 score:(double)arg2 parent:(id)arg3 distance:(unsigned long long)arg4 ;
+(void)propagateDown:(id)arg1 score:(double)arg2 root:(id)arg3 distance:(unsigned long long)arg4 ;
+(void)processTopic:(id)arg1 query:(id)arg2 ;
+(BOOL)provideIndication:(id)arg1 forTopic:(id)arg2 ;
+(id)rankDocuments:(id)arg1 withTopics:(id)arg2 ;
@end

