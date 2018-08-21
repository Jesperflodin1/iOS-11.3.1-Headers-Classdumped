/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationResult.h>

@class NSString;

@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult> {

	long long _branchDepth;
	long long _entryType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long branchDepth;               //@synthesize branchDepth=_branchDepth - In the implementation block
@property (nonatomic,readonly) long long entryType;                 //@synthesize entryType=_entryType - In the implementation block
-(NSString *)description;
-(id)itemResult;
-(long long)branchDepth;
-(id)initWithType:(long long)arg1 branchDepth:(long long)arg2 ;
-(id)trackingEntryResult;
-(long long)entryType;
@end

