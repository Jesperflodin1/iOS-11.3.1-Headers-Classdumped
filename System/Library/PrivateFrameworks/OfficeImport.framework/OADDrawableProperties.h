/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADProperties.h>

@class OADOrientedBounds, OADHyperlink, NSString;

@interface OADDrawableProperties : OADProperties {

	OADOrientedBounds* mOrientedBounds;
	OADHyperlink* mClickHyperlink;
	OADHyperlink* mHoverHyperlink;
	NSString* mTitle;
	NSString* mDescription;
	unsigned mHasAspectRatioLocked : 1;
	unsigned mAspectRatioLocked : 1;
	unsigned mHasWrdInline : 1;
	unsigned mWrdInline : 1;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setAspectRatioLocked:(BOOL)arg1 ;
-(id)clickHyperlink;
-(id)orientedBounds;
-(void)setOrientedBounds:(id)arg1 ;
-(BOOL)hasOrientedBounds;
-(void)setAltDescription:(id)arg1 ;
-(id)hoverHyperlink;
-(void)setClickHyperlink:(id)arg1 ;
-(void)setHoverHyperlink:(id)arg1 ;
-(void)setWrdInline:(BOOL)arg1 ;
-(void)setAltTitle:(id)arg1 ;
-(BOOL)hasClickHyperlink;
-(BOOL)hasHoverHyperlink;
-(BOOL)hasAltTitle;
-(id)altTitle;
-(BOOL)hasAltDescription;
-(id)altDescription;
-(BOOL)isAspectRatioLocked;
-(BOOL)isWrdInline;
-(BOOL)hasAspectRatioLocked;
-(BOOL)hasWrdInline;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
@end

