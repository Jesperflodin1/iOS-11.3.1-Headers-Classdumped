/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@protocol PMLPlanProtocol;
@class NSString;

@interface PMLPlanWrapper : NSObject <PMLPlistAndChunksSerializableProtocol> {

	id<PMLPlanProtocol> _plan;

}

@property (nonatomic,readonly) id<PMLPlanProtocol> plan;              //@synthesize plan=_plan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PMLPlanProtocol>)plan;
-(id)initWithPlan:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
@end

