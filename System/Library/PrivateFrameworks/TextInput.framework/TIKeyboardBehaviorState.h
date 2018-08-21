/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIKeyboardBehaviorState : NSObject {

	BOOL hasInput;
	BOOL hasCandidates;
	BOOL hasCandidateSelected;
	BOOL hasNextPage;
	BOOL showsExtendedList;
	BOOL followsZhuyin;
	BOOL spaceConfirmation;
	BOOL hardwareKeyboardMode;
	BOOL _hasAutocorrection;
	BOOL _userSelectedCurrentCandidate;
	BOOL _showsCandidatesInLayout;

}

@property (assign,nonatomic) BOOL hasInput; 
@property (assign,nonatomic) BOOL hasAutocorrection;                         //@synthesize hasAutocorrection=_hasAutocorrection - In the implementation block
@property (assign,nonatomic) BOOL hasCandidates; 
@property (assign,nonatomic) BOOL hasCandidateSelected; 
@property (assign,nonatomic) BOOL userSelectedCurrentCandidate;              //@synthesize userSelectedCurrentCandidate=_userSelectedCurrentCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasNextPage; 
@property (assign,nonatomic) BOOL showsExtendedList; 
@property (assign,nonatomic) BOOL followsZhuyin; 
@property (assign,nonatomic) BOOL spaceConfirmation; 
@property (assign,nonatomic) BOOL showsCandidatesInLayout;                   //@synthesize showsCandidatesInLayout=_showsCandidatesInLayout - In the implementation block
@property (assign,nonatomic) BOOL hardwareKeyboardMode; 
-(BOOL)hasCandidateSelected;
-(BOOL)showsExtendedList;
-(BOOL)followsZhuyin;
-(BOOL)spaceConfirmation;
-(BOOL)showsCandidatesInLayout;
-(BOOL)hasCandidates;
-(void)setHardwareKeyboardMode:(BOOL)arg1 ;
-(BOOL)hardwareKeyboardMode;
-(BOOL)hasAutocorrection;
-(void)setUserSelectedCurrentCandidate:(BOOL)arg1 ;
-(BOOL)userSelectedCurrentCandidate;
-(void)setHasInput:(BOOL)arg1 ;
-(void)setHasAutocorrection:(BOOL)arg1 ;
-(void)setHasCandidates:(BOOL)arg1 ;
-(void)setHasCandidateSelected:(BOOL)arg1 ;
-(void)setHasNextPage:(BOOL)arg1 ;
-(void)setShowsExtendedList:(BOOL)arg1 ;
-(void)setShowsCandidatesInLayout:(BOOL)arg1 ;
-(void)setFollowsZhuyin:(BOOL)arg1 ;
-(void)setSpaceConfirmation:(BOOL)arg1 ;
-(BOOL)hasNextPage;
-(BOOL)hasInput;
@end

