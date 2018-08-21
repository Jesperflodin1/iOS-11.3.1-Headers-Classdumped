/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSTTableDataObject.h>

@class TSTConditionalStyleSet;

@interface TSTTableDataConditionalStyleSet : TSTTableDataObject {

	TSTConditionalStyleSet* _conditionalStyleSet;

}

@property (nonatomic,retain) TSTConditionalStyleSet * conditionalStyleSet;              //@synthesize conditionalStyleSet=_conditionalStyleSet - In the implementation block
-(id)initObjectWithConditionalStyleSet:(id)arg1 refCount:(unsigned)arg2 ;
-(TSTConditionalStyleSet *)conditionalStyleSet;
-(void)setConditionalStyleSet:(TSTConditionalStyleSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

