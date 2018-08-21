/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@protocol FCFeedGroupInsertionDescriptor;
@class NSString, NSSet;

@interface FCCoverArticlesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	id<FCFeedGroupInsertionDescriptor> _insertionDescriptor;

}

@property (nonatomic,copy,readonly) id<FCFeedGroupInsertionDescriptor> insertionDescriptor;              //@synthesize insertionDescriptor=_insertionDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,copy,readonly) NSString * groupEmitterIdentifier; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
-(id)init;
-(NSString *)groupEmitterIdentifier;
-(BOOL)wantsToInsertGroup:(id)arg1 withContext:(id)arg2 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(NSSet *)emittableGroupTypes;
-(id)backingChannelTagIDWithCoreConfiguration:(id)arg1 ;
-(BOOL)emitsSingletonGroups;
-(long long)requiredForYouContentTypes;
-(id)initWithInsertionDescriptor:(id)arg1 ;
-(id<FCFeedGroupInsertionDescriptor>)insertionDescriptor;
@end

