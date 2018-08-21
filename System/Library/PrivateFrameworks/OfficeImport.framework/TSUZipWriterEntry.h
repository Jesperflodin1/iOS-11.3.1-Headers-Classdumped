/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface TSUZipWriterEntry : NSObject {

	unsigned _CRC;
	NSString* _name;
	NSDate* _lastModificationDate;
	unsigned long long _size;
	unsigned long long _offset;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * lastModificationDate;              //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (assign,nonatomic) unsigned long long size;                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                  //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned CRC;                               //@synthesize CRC=_CRC - In the implementation block
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned)CRC;
-(NSDate *)lastModificationDate;
-(void)setLastModificationDate:(NSDate *)arg1 ;
-(void)setCRC:(unsigned)arg1 ;
@end

