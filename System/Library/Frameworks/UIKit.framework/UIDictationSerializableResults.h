/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSIndexPath;

@interface UIDictationSerializableResults : NSObject <NSSecureCoding, NSCopying> {

	BOOL _fromKeyboard;
	BOOL _useServerCapitalization;
	BOOL _addTrailingSpace;
	BOOL _allowsAlternatives;
	NSArray* _phrases;
	const CFStringRef _transform;
	NSIndexPath* _indexPathOfInterpretations;

}

@property (nonatomic,copy) NSArray * phrases;                                       //@synthesize phrases=_phrases - In the implementation block
@property (assign,nonatomic) BOOL fromKeyboard;                                     //@synthesize fromKeyboard=_fromKeyboard - In the implementation block
@property (assign,nonatomic) const CFStringRef transform;                           //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) BOOL useServerCapitalization;                          //@synthesize useServerCapitalization=_useServerCapitalization - In the implementation block
@property (assign,nonatomic) BOOL addTrailingSpace;                                 //@synthesize addTrailingSpace=_addTrailingSpace - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathOfInterpretations;              //@synthesize indexPathOfInterpretations=_indexPathOfInterpretations - In the implementation block
@property (nonatomic,readonly) BOOL allowsAlternatives;                             //@synthesize allowsAlternatives=_allowsAlternatives - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setTransform:(const CFStringRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)fromKeyboard;
-(id)text;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const CFStringRef)transform;
-(void)setFromKeyboard:(BOOL)arg1 ;
-(void)setUseServerCapitalization:(BOOL)arg1 ;
-(id)textArray;
-(id)dictationPhraseArray;
-(id)singleLineResult;
-(NSArray *)phrases;
-(id)bestText;
-(id)initWithPhrases:(id)arg1 ;
-(NSIndexPath *)indexPathOfInterpretations;
-(void)setIndexPathOfInterpretations:(NSIndexPath *)arg1 ;
-(void)setPhrases:(NSArray *)arg1 ;
-(void)setAddTrailingSpace:(BOOL)arg1 ;
-(id)bestTextArray;
-(BOOL)allowsAlternatives;
-(id)initWithArrayOfArrayOfStrings:(id)arg1 ;
-(id)bestResults;
-(BOOL)useServerCapitalization;
-(BOOL)addTrailingSpace;
@end
