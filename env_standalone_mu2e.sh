source /cvmfs/mu2e.opensciencegrid.org/setupmu2e-art.sh
# setup boost v1_70_0 -q+e28:+prof
# setup gsl v2_7
# setup root v6_12_06a -q+e17:+prof

GSL=/cvmfs/mu2e.opensciencegrid.org/artexternals/gsl/v2_7/Linux64bit+3.10-2.17/lib/
BOOST=/cvmfs/mu2e.opensciencegrid.org/artexternals/boost/v1_82_0/Linux64bit+3.10-2.17-e28-prof/lib/

export PATH=${PATH}:${PWD}/build/bin:${PWD}/scripts:${PWD}/../../vdt/:
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${PWD}/build/lib:${PWD}/../../vdt/build/lib/:${GSL}:${BOOST}:
# export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${PWD}/build/lib:${PWD}/../../vdt/build/lib/
export PYTHONPATH=${PYTHONPATH}:${PWD}/build/lib/python/
export CPLUS_INCLUDE_PATH=${CPLUS_INCLUDE_PATH}:../../vdt/:${HOME}/local/eigen-3.4.0/
