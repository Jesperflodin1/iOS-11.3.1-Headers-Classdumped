/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADTextBody;

@interface OADShape : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADTextBody* mTextBody;

}
-(id)init;
-(id)geometry;
-(void)dealloc;
-(id)description;
-(int)type;
-(void)setGeometry:(id)arg1 ;
-(id)shapeStyle;
-(id)shapeProperties;
-(BOOL)isTextBox;
-(id)textBody;
-(void)setTextBody:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(void)createPresetGeometryWithShapeType:(int)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)flattenProperties;
@end

