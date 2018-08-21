/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStyledInfo.h>

@class NSString;

@interface TSDMediaInfo : TSDStyledInfo {

	CGSize mOriginalSize;
	struct {
		unsigned isPlaceholder : 1;
		unsigned wasMediaReplaced : 1;
	}  mFlags;

}

@property (assign,nonatomic) CGSize originalSize; 
@property (nonatomic,readonly) CGSize defaultOriginalSize; 
@property (assign,nonatomic) BOOL isPlaceholder; 
@property (assign,nonatomic) BOOL wasMediaReplaced; 
@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,readonly) NSString * mediaDisplayName; 
@property (nonatomic,readonly) NSString * mediaFileType; 
@property (nonatomic,readonly) CGSize rawDataSize; 
-(unsigned)flags;
-(CGSize)originalSize;
-(BOOL)isPlaceholder;
-(void)setGeometry:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(CGSize)defaultOriginalSize;
-(void)setOriginalSize:(CGSize)arg1 ;
-(NSString *)mediaDisplayName;
-(NSString *)mediaFileType;
-(CGSize)rawDataSize;
-(CGPoint)centerForReplacingWithNewMedia;
-(void)updateGeometryToReplaceMediaInfo:(id)arg1 ;
-(BOOL)wasMediaReplaced;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(void)setWasMediaReplaced:(BOOL)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)takePropertiesFromReplacedMediaInfo:(id)arg1 ;
@end

