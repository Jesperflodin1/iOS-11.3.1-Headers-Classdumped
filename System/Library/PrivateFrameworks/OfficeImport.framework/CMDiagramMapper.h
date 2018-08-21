/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMDrawableMapper.h>

@class ODDDiagram, CMDrawingContext;

@interface CMDiagramMapper : CMDrawableMapper {

	ODDDiagram* mDiagram;
	CMDrawingContext* mDrawingContext;

}
+(int)diagramTypeFromString:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)styleMatrix;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4 ;
-(id)identifierFromLayoutTypeId:(id)arg1 ;
-(id)copyDiagramMapperForId:(id)arg1 ;
-(id)diagram;
@end

