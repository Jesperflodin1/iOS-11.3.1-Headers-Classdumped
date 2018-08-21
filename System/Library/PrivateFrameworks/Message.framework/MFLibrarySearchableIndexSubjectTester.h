/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFLibrarySearchableIndexTesting.h>

@class NSString, MFLibrarySearchableIndexQueryContext;

@interface MFLibrarySearchableIndexSubjectTester : NSObject <MFLibrarySearchableIndexTesting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MFLibrarySearchableIndexQueryContext * context; 
-(MFLibrarySearchableIndexQueryContext *)context;
-(id)transformDataForVerification:(id)arg1 ;
-(id)spotlightQueryFromDataSamples:(id)arg1 ;
-(BOOL)verifySearchableItem:(id)arg1 againstExpectedData:(id)arg2 ;
-(id)_subjectFromSearchableItem:(id)arg1 ;
@end

