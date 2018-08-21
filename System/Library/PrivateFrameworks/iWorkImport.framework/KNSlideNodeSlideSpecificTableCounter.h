/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface KNSlideNodeSlideSpecificTableCounter : NSObject {

	NSUUID* _tableInfoUUID;
	unsigned long long _linkCount;

}

@property (nonatomic,retain) NSUUID * tableInfoUUID;                      //@synthesize tableInfoUUID=_tableInfoUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long linkCount;              //@synthesize linkCount=_linkCount - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
-(id)initWithTableInfoUUID:(id)arg1 andLinkCount:(unsigned long long)arg2 ;
-(NSUUID *)tableInfoUUID;
-(void)setTableInfoUUID:(NSUUID *)arg1 ;
-(unsigned long long)linkCount;
-(id)description;
-(NSString *)stringValue;
-(void)increment;
-(void)decrement;
@end

