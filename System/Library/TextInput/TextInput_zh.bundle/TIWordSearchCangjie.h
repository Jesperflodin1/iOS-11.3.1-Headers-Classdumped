/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TIWordSearchShapeBased.h>

@interface TIWordSearchCangjie : TIWordSearchShapeBased {

	BOOL _suchengEnabled;
	BOOL _supportsEnglish;

}

@property (assign) BOOL suchengEnabled;               //@synthesize suchengEnabled=_suchengEnabled - In the implementation block
@property (assign) BOOL supportsEnglish;              //@synthesize supportsEnglish=_supportsEnglish - In the implementation block
-(int)mecabraInputMethodType;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(void)setSuchengEnabled:(BOOL)arg1 ;
-(BOOL)suchengEnabled;
-(void)setSupportsEnglish:(BOOL)arg1 ;
-(BOOL)supportsEnglish;
-(BOOL)validateCode:(id)arg1 withOption:(unsigned long long)arg2 ;
@end

