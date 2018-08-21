/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDAlignmentInfo, EDBorders, EDFill, EDFont, EDProtection, EDContentFormat;

@interface EDDifferentialStyle : NSObject <NSCopying> {

	EDAlignmentInfo* mAlignmentInfo;
	EDBorders* mBorders;
	EDFill* mFill;
	EDFont* mFont;
	EDProtection* mProtection;
	EDContentFormat* mContentFormat;

}

@property (nonatomic,retain) EDAlignmentInfo * alignmentInfo; 
@property (nonatomic,retain) EDBorders * borders; 
@property (nonatomic,retain) EDFill * fill; 
@property (nonatomic,retain) EDFont * font; 
@property (nonatomic,retain) EDProtection * protection; 
@property (nonatomic,retain) EDContentFormat * contentFormat; 
+(id)differentialStyle;
-(void)dealloc;
-(id)description;
-(void)setFont:(EDFont *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(EDFill *)fill;
-(EDFont *)font;
-(void)setFill:(EDFill *)arg1 ;
-(EDAlignmentInfo *)alignmentInfo;
-(EDContentFormat *)contentFormat;
-(EDBorders *)borders;
-(void)setContentFormat:(EDContentFormat *)arg1 ;
-(void)setAlignmentInfo:(EDAlignmentInfo *)arg1 ;
-(void)setBorders:(EDBorders *)arg1 ;
-(void)setProtection:(EDProtection *)arg1 ;
-(EDProtection *)protection;
@end

