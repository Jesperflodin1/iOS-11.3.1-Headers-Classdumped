/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFQueueingStrategy.h>

@class NSString;

@interface _MFDefaultQueueingStrategy : NSObject <MFQueueingStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * descriptionType; 
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(NSString *)descriptionType;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2 ;
@end

