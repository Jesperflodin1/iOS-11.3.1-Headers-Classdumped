/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTLayoutSpaceBezierPathCacheKey : NSObject <NSCopying> {

	BOOL _reoriginToZero;
	double _inset;
	SCD_Struct_TS625 _gridRange;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) SCD_Struct_TS625 gridRange;               //@synthesize gridRange=_gridRange - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) double inset;                             //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic) BOOL reoriginToZero;                      //@synthesize reoriginToZero=_reoriginToZero - In the implementation block
-(BOOL)reoriginToZero;
-(SCD_Struct_TS625)gridRange;
-(void)setGridRange:(SCD_Struct_TS625)arg1 ;
-(void)setReoriginToZero:(BOOL)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setInset:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGAffineTransform)transform;
-(double)inset;
@end
