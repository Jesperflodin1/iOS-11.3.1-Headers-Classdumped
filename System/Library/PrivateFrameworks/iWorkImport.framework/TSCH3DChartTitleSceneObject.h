/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartLabelsContainingSceneObject.h>

@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject
+(void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3 ;
+(CGSize)p_labelWrapSizeForScene:(id)arg1 returningSizeValue:(id*)arg2 ;
+(CGSize)labelWrapSizeForScene:(id)arg1 ;
+(BOOL)setLabelWrapBounds:(const box<glm::detail::tvec2<float> >*)arg1 forScene:(id)arg2 ;
+(TSCH3DScenePart)partWithChartInfo:(id)arg1 ;
-(void)renderLabels:(id)arg1 ;
-(void)renderAnnotatedLabels:(id)arg1 ;
-(id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2 ;
-(BOOL)isAnnotated;
-(void)p_renderLabel:(id)arg1 ;
@end

