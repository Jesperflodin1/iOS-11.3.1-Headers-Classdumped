/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDSlideChild.h>

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {

	int mSlideLayoutType;
	PDSlideMaster* mSlideMaster;

}
-(void)dealloc;
-(id)description;
-(id)transition;
-(id)background;
-(id)defaultTheme;
-(id)slideMaster;
-(id)parentSlideBase;
-(void)doneWithContent;
-(int)slideLayoutType;
-(void)setSlideMaster:(id)arg1 ;
-(void)setSlideLayoutType:(int)arg1 ;
-(id)initWithSlideMaster:(id)arg1 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
@end

