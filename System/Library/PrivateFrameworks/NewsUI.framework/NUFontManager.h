/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUFontRegistration.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet, NSString;

@interface NUFontManager : NSObject <NUFontRegistration> {

	NSObject*<OS_dispatch_queue> _registrationQueue;
	NSCountedSet* _referenceCounts;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> registrationQueue;              //@synthesize registrationQueue=_registrationQueue - In the implementation block
@property (nonatomic,readonly) NSCountedSet * referenceCounts;                              //@synthesize referenceCounts=_referenceCounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)registrationQueue;
-(unsigned long long)referenceCountForFontWithURL:(id)arg1 ;
-(void)increaseReferenceCountForFontWithURL:(id)arg1 ;
-(void)decreaseReferenceCountForFontWithURL:(id)arg1 ;
-(NSCountedSet *)referenceCounts;
-(BOOL)shouldUnregisterFontWithURL:(id)arg1 ;
-(BOOL)unregisterFontAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerFontWithURL:(id)arg1 error:(id*)arg2 ;
-(void)unregisterFontWithURL:(id)arg1 ;
@end

