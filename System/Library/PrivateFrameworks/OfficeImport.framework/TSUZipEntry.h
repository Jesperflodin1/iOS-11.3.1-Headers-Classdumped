/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface TSUZipEntry : NSObject {

	BOOL _compressed;
	unsigned short _nameLength;
	unsigned short _extraFieldsLength;
	unsigned _CRC;
	NSString* _name;
	NSDate* _lastModificationDate;
	unsigned long long _size;
	unsigned long long _compressedSize;
	unsigned long long _offset;
	unsigned long long _fileHeaderLength;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,copy) NSDate * lastModificationDate;                      //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (assign,nonatomic) unsigned long long size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long compressedSize;                //@synthesize compressedSize=_compressedSize - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                        //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned CRC;                                     //@synthesize CRC=_CRC - In the implementation block
@property (assign,nonatomic) unsigned short nameLength;                        //@synthesize nameLength=_nameLength - In the implementation block
@property (assign,nonatomic) unsigned short extraFieldsLength;                 //@synthesize extraFieldsLength=_extraFieldsLength - In the implementation block
@property (assign,nonatomic) unsigned long long fileHeaderLength;              //@synthesize fileHeaderLength=_fileHeaderLength - In the implementation block
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(BOOL)isCompressed;
-(unsigned long long)compressedSize;
-(unsigned)CRC;
-(unsigned short)extraFieldsLength;
-(NSDate *)lastModificationDate;
-(void)setLastModificationDate:(NSDate *)arg1 ;
-(void)setCRC:(unsigned)arg1 ;
-(void)setCompressed:(BOOL)arg1 ;
-(void)setCompressedSize:(unsigned long long)arg1 ;
-(unsigned short)nameLength;
-(void)setNameLength:(unsigned short)arg1 ;
-(void)setExtraFieldsLength:(unsigned short)arg1 ;
-(unsigned long long)fileHeaderLength;
-(void)setFileHeaderLength:(unsigned long long)arg1 ;
@end
