#ifndef __DUNEHELLO_INCLUDED__
#define __DUNEHELLO_INCLUDED__
/**
 * @file
 *
 * Social conversation protocol.
 */

namespace Dune {
  namespace Hello {
	/**
	 * Algebra for greetings.
	 */
	struct Hello {
	  /**
	   * Do the greeting operation.
	   *
	   * @return Meaning of life, universe and everything
	   */
	  int operator() ();
	};
  }
}

#endif /* __DUNEHELLO_INCLUDED__ */
