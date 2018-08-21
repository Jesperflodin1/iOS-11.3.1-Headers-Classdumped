/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallDirectoryLabeledPhoneNumberEntryData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableData, NSMutableDictionary;

@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData : CXCallDirectoryLabeledPhoneNumberEntryData <NSCopying> {

	NSMutableData* _mutablePhoneNumberData;
	NSMutableData* _mutableLabelData;
	NSMutableDictionary* _labelToLabelDataOffset;

}

@property (nonatomic,retain) NSMutableData * mutablePhoneNumberData;                    //@synthesize mutablePhoneNumberData=_mutablePhoneNumberData - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableLabelData;                          //@synthesize mutableLabelData=_mutableLabelData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * labelToLabelDataOffset;              //@synthesize labelToLabelDataOffset=_labelToLabelDataOffset - In the implementation block
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableData *)mutablePhoneNumberData;
-(NSMutableData *)mutableLabelData;
-(BOOL)appendPhoneNumber:(long long)arg1 label:(id)arg2 ;
-(void)setMutablePhoneNumberData:(NSMutableData *)arg1 ;
-(void)setMutableLabelData:(NSMutableData *)arg1 ;
-(NSMutableDictionary *)labelToLabelDataOffset;
-(void)setLabelToLabelDataOffset:(NSMutableDictionary *)arg1 ;
@end

