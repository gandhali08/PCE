/*
 * J1939.h
 *
 * Created: 11-01-2016 13:28:48
 *  Author: ROHANP
 */ 


#ifndef J1939_H_
#define J1939_H_

#define J1939_TIMEOUT_RATE	( 62500 )
#define J1939_TIMEOUT		( 5 )

#define PGN_MASK	( 65535 )

#define PGN_EEC2	( 61443 )
#define PGN_EEC1	( 61444 )
#define PGN_DM1		( 65226 )
#define PGN_SOFT	( 65242 )
#define PGN_HOURS	( 65253 )
#define PGN_CI		( 65259 )
#define PGN_ET1		( 65262 )
#define PGN_EFL_P1	( 65263 )
#define PGN_LFE1	( 65266 )
#define PGN_IC1		( 65270 )
#define PGN_VEP1	( 65271 )
#define PGN_WFI		( 65279 )

#define PGN_AMB		( 65269 )
#define PGN_LFC		( 65257 )
#define PGN_TCO1	( 65132 )

#endif /* J1939_H_ */