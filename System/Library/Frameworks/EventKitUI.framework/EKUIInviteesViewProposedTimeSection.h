/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKUIInviteesViewConflictResolutionSection.h>

@class EKEvent, NSString, NSArray, NSMutableSet, EKInviteeAlternativeTimeSearcher, NSMutableOrderedSet;

@interface EKUIInviteesViewProposedTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection> {

	BOOL _conflictFound;
	EKEvent* _event;
	NSString* _title;
	NSArray* _busyParticipants;
	NSMutableSet* _rowsShowingAllParticipants;
	NSString* _cachedCellReuseIdentifier;
	unsigned long long _reuseIdentifierVersion;
	/*^block*/id _tableViewCellHook;
	/*^block*/id _newTimeChosen;
	/*^block*/id _showPreviewOfEventAtTime;
	EKInviteeAlternativeTimeSearcher* _availabilitySearcher;
	NSMutableOrderedSet* _proposedTimes;
	NSArray* _proposedTimeResults;
	long long _checkedRow;

}

@property (assign,nonatomic,__weak) EKEvent * event;                                               //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * busyParticipants;                                           //@synthesize busyParticipants=_busyParticipants - In the implementation block
@property (nonatomic,retain) NSMutableSet * rowsShowingAllParticipants;                            //@synthesize rowsShowingAllParticipants=_rowsShowingAllParticipants - In the implementation block
@property (assign,nonatomic) BOOL conflictFound;                                                   //@synthesize conflictFound=_conflictFound - In the implementation block
@property (nonatomic,retain) NSString * cachedCellReuseIdentifier;                                 //@synthesize cachedCellReuseIdentifier=_cachedCellReuseIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long reuseIdentifierVersion;                            //@synthesize reuseIdentifierVersion=_reuseIdentifierVersion - In the implementation block
@property (nonatomic,copy) id tableViewCellHook;                                                   //@synthesize tableViewCellHook=_tableViewCellHook - In the implementation block
@property (nonatomic,copy) id newTimeChosen;                                                       //@synthesize newTimeChosen=_newTimeChosen - In the implementation block
@property (nonatomic,copy) id showPreviewOfEventAtTime;                                            //@synthesize showPreviewOfEventAtTime=_showPreviewOfEventAtTime - In the implementation block
@property (nonatomic,retain) EKInviteeAlternativeTimeSearcher * availabilitySearcher;              //@synthesize availabilitySearcher=_availabilitySearcher - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * proposedTimes;                                  //@synthesize proposedTimes=_proposedTimes - In the implementation block
@property (nonatomic,retain) NSArray * proposedTimeResults;                                        //@synthesize proposedTimeResults=_proposedTimeResults - In the implementation block
@property (assign,nonatomic) long long checkedRow;                                                 //@synthesize checkedRow=_checkedRow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isRowChecked:(long long)arg1 ;
-(void)setChecked:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(unsigned long long)numberOfRows;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)updateWithEvent:(id)arg1 ;
-(id)headerTitle;
-(BOOL)_isValidRow:(long long)arg1 ;
-(NSString *)cachedCellReuseIdentifier;
-(unsigned long long)reuseIdentifierVersion;
-(void)setCachedCellReuseIdentifier:(NSString *)arg1 ;
-(void)setReuseIdentifierVersion:(unsigned long long)arg1 ;
-(id)debugTitle;
-(BOOL)sectionShouldBeShown;
-(id)cellForIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg1 ;
-(void)selectRow:(id)arg1 ;
-(double)estimatedHeightForRow:(id)arg1 ;
-(BOOL)canEditRow:(id)arg1 ;
-(long long)editingStyleForRow:(id)arg1 ;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg1 ;
-(void)commitEditingStyle:(long long)arg1 forRow:(id)arg2 ;
-(void)setTableViewCellHook:(id)arg1 ;
-(void)cancelOutstandingOperations;
-(id)tableViewCellHook;
-(void)setAvailabilitySearcher:(EKInviteeAlternativeTimeSearcher *)arg1 ;
-(EKInviteeAlternativeTimeSearcher *)availabilitySearcher;
-(void)clearCheckmark;
-(void)setShowPreviewOfEventAtTime:(id)arg1 ;
-(void)setNewTimeChosen:(id)arg1 ;
-(void)availabilitySearcherChangedState:(long long)arg1 ;
-(BOOL)injectNewRowsBeforeLastExistingRow;
-(void)refreshCellsAfterStateChange;
-(void)setRowsShowingAllParticipants:(NSMutableSet *)arg1 ;
-(NSMutableOrderedSet *)proposedTimes;
-(id)showPreviewOfEventAtTime;
-(NSMutableSet *)rowsShowingAllParticipants;
-(id)busyParticipantsForDate:(id)arg1 ;
-(id)namesForParticipantsProposingDate:(id)arg1 ;
-(id)newTimeChosen;
-(long long)checkedRow;
-(void)setCheckedRow:(long long)arg1 ;
-(void)setProposedTimeResults:(NSArray *)arg1 ;
-(NSArray *)proposedTimeResults;
-(NSArray *)busyParticipants;
-(void)setBusyParticipants:(NSArray *)arg1 ;
-(BOOL)conflictFound;
-(void)setConflictFound:(BOOL)arg1 ;
-(void)setProposedTimes:(NSMutableOrderedSet *)arg1 ;
-(BOOL)canSelectRow:(id)arg1 ;
@end

