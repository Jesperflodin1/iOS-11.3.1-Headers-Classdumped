/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSTTableDataObject.h>

@class TSKFormat;

@interface TSTTableDataFormat : TSTTableDataObject {

	TSKFormat* _format;

}

@property (nonatomic,readonly) TSKFormat * format;              //@synthesize format=_format - In the implementation block
-(id)initObjectWithFormat:(id)arg1 refCount:(unsigned)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(TSKFormat *)format;
@end

