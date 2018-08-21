/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTextStorage, NSMutableArray;

@interface _NSAttributeRun : NSObject <NSCopying> {

	NSRange _range;
	NSTextStorage* _textStorage;
	NSMutableArray* _attributesArray;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(id)initWithTextStorage:(id)arg1 range:(NSRange)arg2 ;
-(void)restoreAttributesOfTextStorage:(id)arg1 ;
@end
