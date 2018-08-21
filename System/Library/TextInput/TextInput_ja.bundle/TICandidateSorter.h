/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInput_ja/TextInput_ja-Structs.h>
@interface TICandidateSorter : NSObject {

	IDXIndexRef _index;
	CFDictionaryRef _radicalToSortPosition;

}

@property (assign) IDXIndexRef index;                                  //@synthesize index=_index - In the implementation block
@property (assign) CFDictionaryRef radicalToSortPosition;              //@synthesize radicalToSortPosition=_radicalToSortPosition - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setIndex:(IDXIndexRef)arg1 ;
-(IDXIndexRef)index;
-(id)candidatesFromCandidates:(id)arg1 inputString:(id)arg2 sortedBy:(unsigned long long)arg3 ;
-(BOOL)hasCandidatesFromCandidates:(id)arg1 inputString:(id)arg2 sortedBy:(unsigned long long)arg3 ;
-(void)setRadicalToSortPosition:(CFDictionaryRef)arg1 ;
-(BOOL)getInfoForCharacter:(id)arg1 strokeCount:(unsigned long long*)arg2 radicals:(id*)arg3 yomis:(id*)arg4 ;
-(CFDictionaryRef)radicalToSortPosition;
-(BOOL)hasCandidatesSortedByRadicalFromCandidates:(id)arg1 ;
-(BOOL)hasCandidatesSortedByYomiFromCandidates:(id)arg1 inputString:(id)arg2 ;
-(BOOL)hasCandidatesSortedByFacemarkCategoryFromCandidates:(id)arg1 ;
-(id)candidatesSortedByRadicalFromCandidates:(id)arg1 ;
-(id)candidatesSortedByYomiFromCandidates:(id)arg1 inputString:(id)arg2 ;
@end

