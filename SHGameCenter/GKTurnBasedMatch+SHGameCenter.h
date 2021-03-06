
#import "SHGameCenterBlockDefinitions.h"

@interface GKTurnBasedMatch (SHGameCenter)


#pragma mark - Participant Getters
@property(nonatomic,readonly) GKTurnBasedParticipant  * SH_meAsParticipant;
@property(nonatomic,readonly) NSArray                 * SH_participantsWithoutMe;
@property(nonatomic,readonly) NSArray                 * SH_participantsWithoutCurrent;
@property(nonatomic,readonly) NSArray                 * SH_participantsNextOrder;
@property(nonatomic,readonly) NSArray                 * SH_playerIdentifiers;


#pragma mark - Conditions
@property(nonatomic,readonly) BOOL SH_isMyTurn;
//Participants who are neither active nor invited - e.g done, declined and etc
@property(nonatomic,readonly) BOOL SH_hasIncompleteParticipants;

@property(nonatomic,readonly) BOOL SH_isMatchStatusOpen;
@property(nonatomic,readonly) BOOL SH_isMatchStatusMatching;
@property(nonatomic,readonly) BOOL SH_isMatchStatusEnded;
@property(nonatomic,readonly) BOOL SH_isMatchStatusUnknown;



#pragma mark - Observer
-(void)SH_setObserver:(id)theObserver
  matchEventTurnBlock:(SHGameMatchEventTurnBlock)theMatchEventTurnBlock
 matchEventEndedBlock:(SHGameMatchEventEndedBlock)theMatchEventEndedBlock;

+(void)SH_setObserver:(id)theObserver
matchEventTurnBlock:(SHGameMatchEventTurnBlock)theMatchEventTurnBlock
matchEventEndedBlock:(SHGameMatchEventEndedBlock)theMatchEventEndedBlock
matchEventInvitesBlock:(SHGameMatchEventInvitesBlock)theMatchEventInvitesBlock;



#pragma mark - Preloaders

+(void)SH_requestMatchesWithBlock:(SHGameListsBlock)theMatchesBlock
              andFriendsWithBlock:(SHGameListsBlock)theFriendsBlock
              withCompletionBlock:(SHGameCompletionBlock)theCompletionBlock;


#pragma mark - Player
-(void)SH_requestPlayersWithBlock:(SHGameListsBlock)theBlock;


#pragma mark - Equal
-(BOOL)SH_isEqualToMatch:(id)object;


#pragma mark - Match Getters
+(void)SH_requestMatchesWithBlock:(SHGameListsBlock)theBlock;




#pragma mark - Match Setters
-(void)SH_resignWithBlock:(SHGameMatchBlock)theBlock;

-(void)SH_deleteWithBlock:(SHGameMatchBlock)theBlock;





@end
