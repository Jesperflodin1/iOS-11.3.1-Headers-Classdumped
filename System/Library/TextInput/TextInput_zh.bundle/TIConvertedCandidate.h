/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIKeyboardCandidate, NSString, NSArray;

@interface TIConvertedCandidate : NSObject {

	TIKeyboardCandidate* _candidate;
	NSString* _convertedInput;
	NSString* _replacedAmbiguousPinyinSyllable;
	NSString* _replacementUnambiguousPinyinSyllable;
	NSArray* _geometryData;
	NSArray* _touchData;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;                            //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,copy) NSString * convertedInput;                                    //@synthesize convertedInput=_convertedInput - In the implementation block
@property (nonatomic,readonly) NSString * revertedInput; 
@property (nonatomic,copy) NSString * replacedAmbiguousPinyinSyllable;                   //@synthesize replacedAmbiguousPinyinSyllable=_replacedAmbiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * replacementUnambiguousPinyinSyllable;              //@synthesize replacementUnambiguousPinyinSyllable=_replacementUnambiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSArray * geometryData;                                       //@synthesize geometryData=_geometryData - In the implementation block
@property (nonatomic,copy) NSArray * touchData;                                          //@synthesize touchData=_touchData - In the implementation block
-(id)initWithCandidate:(id)arg1 ;
-(void)dealloc;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)candidate;
-(NSString *)replacementUnambiguousPinyinSyllable;
-(NSString *)replacedAmbiguousPinyinSyllable;
-(id)initWithCandidate:(id)arg1 replacedAmbiguousPinyinSyllable:(id)arg2 replacementUnambiguousPinyinSyllable:(id)arg3 convertedInput:(id)arg4 ;
-(NSString *)revertedInput;
-(NSString *)convertedInput;
-(void)setConvertedInput:(NSString *)arg1 ;
-(void)setReplacedAmbiguousPinyinSyllable:(NSString *)arg1 ;
-(void)setReplacementUnambiguousPinyinSyllable:(NSString *)arg1 ;
-(NSArray *)geometryData;
-(void)setGeometryData:(NSArray *)arg1 ;
-(NSArray *)touchData;
-(void)setTouchData:(NSArray *)arg1 ;
@end
