/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringIDTracker.h>

@class NSString;

@interface TTMergeableStringSelection : NSObject <TTMergeableStringIDTracker> {

	vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >* _selectionRanges;
	unsigned long long _selectionAffinity;

}

@property (assign,nonatomic) unsigned long long selectionAffinity;              //@synthesize selectionAffinity=_selectionAffinity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)selectionAffinity;
-(void)setSelectionAffinity:(unsigned long long)arg1 ;
-(void)saveToArchive:(Selection*)arg1 ;
-(vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >*)selectionRanges;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(id)serialize;
-(id)initWithArchive:(const Selection*)arg1 ;
@end

